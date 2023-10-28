[Back to ACG K8s Quick Start](../main.md)

# Creating a Kubernetes Cluster



<h2>Introduction</h2>
<p>In this hands-on lab, we will install and configure a Kubernetes cluster consisting of 1 master and 2 nodes. Once the installation and configuration are complete, we will have a 3-node Kubernetes cluster that uses Flannel as the network overlay.</p>

<h2>Install Docker and Kubernetes on All Servers</h2>
<p>Most of these commands need to be run on each of the nodes. Pay attention though. Down at Step 10, we are going to do a little bit on just the master, and down at Step 15 we'll run something on just the nodes. There are notes down there, just be watching for them.</p>
<p>1 - Once we have logged in, we need to elevate privileges using <code>sudo</code>:</p>
<pre><code>sudo su  
</code></pre>
<p>2 - Disable SELinux:</p>
<pre><code>setenforce 0</code></pre>
<pre><code>sed -i --follow-symlinks 's/SELINUX=enforcing/SELINUX=disabled/g' /etc/sysconfig/selinux
</code></pre>
<p>3 - Enable the <code>br_netfilter</code> module for cluster communication:</p>
<pre><code>modprobe br_netfilter</code></pre>
<pre><code>echo '1' > /proc/sys/net/bridge/bridge-nf-call-iptables
</code></pre>
<p>4 - Ensure that the Docker dependencies are satisfied:</p>
<pre><code>yum install -y yum-utils device-mapper-persistent-data lvm2
</code></pre>
<p>5 - Add the Docker repo and install Docker:</p>
<pre><code>yum-config-manager --add-repo https://download.docker.com/linux/centos/docker-ce.repo</code></pre>
<pre><code>yum install -y docker-ce
</code></pre>
<p>6 - Set the cgroup driver for Docker to systemd, reload systemd, then enable and start Docker:</p>
<pre><code>sed -i '/^ExecStart/ s/$/ --exec-opt native.cgroupdriver=systemd/' /usr/lib/systemd/system/docker.service</code></pre>
<pre><code>systemctl daemon-reload</code></pre>
<pre><code>systemctl enable docker --now
</code></pre>
<p>7 - Add the Kubernetes repo:</p>
<pre><code>cat << EOF > /etc/yum.repos.d/kubernetes.repo
[kubernetes]
name=Kubernetes
baseurl=https://packages.cloud.google.com/yum/repos/kubernetes-el7-x86_64
enabled=1
gpgcheck=0
repo_gpgcheck=0
gpgkey=https://packages.cloud.google.com/yum/doc/yum-key.gpg
https://packages.cloud.google.com/yum/doc/rpm-package-key.gpg
EOF
</code></pre>
<p>8 - Install Kubernetes <code>v1.14.0</code>:</p>
<pre><code>yum install -y kubelet-1.14.0-0 kubeadm-1.14.0-0 kubectl-1.14.0-0 kubernetes-cni-0.7.5
</code></pre>
<p>9 -  Enable the <code>kubelet</code> service.  The <code>kubelet</code> service will fail to start until the cluster is initialized, this is expected:</p>
<pre><code>systemctl enable kubelet
</code></pre>

<br>

<h3>Note: Complete the following section on the MASTER ONLY!</h3>
<p>10 -  Initialize the cluster using the IP range for Flannel:</p>
<pre><code>kubeadm init --pod-network-cidr=10.244.0.0/16
</code></pre>
<p>11 - Copy the <code>kubeadmn join</code> command that is in the output. We will need this later.</p>
<p>12 - Exit <code>sudo</code>, copy the <code>admin.conf</code> to your home directory, and take ownership.</p>
<pre><code>mkdir -p $HOME/.kube</code></pre>
<pre><code>sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config</code></pre>
<pre><code>sudo chown $(id -u):$(id -g) $HOME/.kube/config
</code></pre>
<p>13 - Deploy Flannel:</p>
<pre><code>kubectl apply -f https://raw.githubusercontent.com/flannel-io/flannel/master/Documentation/kube-flannel-old.yaml
</code></pre>
<p>14 - Check the cluster state:</p>
<pre><code>kubectl get pods --all-namespaces
</code></pre>
<h3>Note: Complete the following steps on the NODES ONLY!</h3>
<p>15 - Run the <code>join</code> command that you copied earlier, this requires running the command prefaced with <code>sudo</code> on the nodes (if we hadn't run <code>sudo su</code> to begin with). Then we'll check the nodes from the master.</p>
<pre><code>kubectl get nodes
</code></pre>

<br><br>


<h2>Create and Scale a Deployment Using kubectl</h2>
<h3>Note: These commands will only be run on the master node.</h3>
<p>16 - Create a simple deployment:</p>
<pre><code>kubectl create deployment nginx --image=nginx
</code></pre>
<p>17 - Inspect the pod:</p>
<pre><code>kubectl get pods
</code></pre>
<p>18 - Scale the deployment:</p>
<pre><code>kubectl scale deployment nginx --replicas=4
</code></pre>
<p>19 - Inspect the pods. We should have four now:</p>
<pre><code>kubectl get pods
</code></pre>

<br>

[Back to ACG K8s Quick Start](../main.md)