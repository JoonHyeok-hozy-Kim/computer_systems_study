[Back to ACG K8s Essentials](../main.md)

# Building a Kubernetes 1.27 Cluster with kubeadm

### Objective
- Install Packages
- Initialize the Cluster
- Install the Calico Network Add-On
- Join the Worker Nodes to the Cluster

<br>

### Hands on
#### 1. Install containerd in both control plane and the worker node.
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
  - Enable the above settings immediately.
    ```
    sudo sysctl --system
    ```
- Install *containerd*.
  ```
  sudo apt-get update && sudo apt-get install -y containerd
  ```
- Setup the *containerd* configuration file.
  - Create a directory as follows:
    ```
    sudo mkdir -p /etc/containerd
    ```
  - Create the config file.
    ```
    sudo containerd config default | sudo tee /etc/containerd/config.toml
    ```
  - Restart *containerd* to make sure that *containerd* uses the above config file.
    ```
    sudo systemctl restart containerd
    ```
  - Check if *containerd* is running.
    ```
    sudo systemctl status containerd
    ```
    ![](images/001.png)

<br>

#### 2. Install Kubernetes packages
- Disable swap
  ```
  sudo swapoff -a
  ```
- Install packages that might be needed during the installation process (Recommended in the k8s documentation.)
  ```
  sudo apt-get update && sudo apt-get install -y apt-transport-https curl
  ```
  - Packages
    - apt-transport-https
    - curl
- Download the gpg key for the k8s package repository so that we can locate the k8s packages. and add it.
  ```
  curl -s https://packages.cloud.google.com/apt/doc/apt-key.gpg | sudo apt-key add -
  ```
- Set up repository configuration
  ```
  cat <<EOF | sudo tee /etc/apt/sources.list.d/kubernetes.list
  deb https://apt.kubernetes.io/ kubernetes-xenial main
  EOF
  ```





[Back to ACG K8s Essentials](../main.md)