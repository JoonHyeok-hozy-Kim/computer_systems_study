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
- Enable kernel modules, overlay and br_netfilter, whenever the server starts.
  ```
  cat <<EOF | sudo tee /etc/modules-load.d/containerd.conf
  overlay
  br_netfilter
  EOF
  ```


[Back to ACG K8s Essentials](../main.md)