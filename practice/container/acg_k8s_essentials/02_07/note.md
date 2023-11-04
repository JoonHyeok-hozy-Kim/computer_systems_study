[Back to ACG K8s Essentials](../main.md)

# Building a Kubernetes 1.27 Cluster with kubeadm

### Objective
- Install Packages
- Initialize the Cluster
- Install the Calico Network Add-On
- Join the Worker Nodes to the Cluster

<br>

### Hands on
Install containerd in both control plane and the worker node.
- Enable kernel modules, *overlay* and *br_netfilter*, to be loaded whenever the server starts.
  ```
  cat <<EOF | sudo tee /etc/modules-load.d/containerd.conf
  overlay
  br_netfilter
  EOF
  ```
- Enable *overlay* and *br_netfilter* immediately without the server restart.
  ```
  sudo modprobe overlay
  ```
  ```
  sudo modprobe br_netfilter
  ```
- Configurations needed for the kubernetes networking.
  ```
  cat <<EOF | sudo tee /etc/sysctl.d/99-kubernetes-cri.conf
  net.bridge.bridge-nf-call-iptables = 1
  net.ipv4.ip_forward = 1
  net.bridge.bridge-nf-call-ip6tables = 1
  EOF
  ```


[Back to ACG K8s Essentials](../main.md)