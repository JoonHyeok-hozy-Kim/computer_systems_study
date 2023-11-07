[Back to ACG K8s Essentials](../main.md)

# Kubernetes Architecture and Components

#### Concept) ectd
Provides distributed, synchronized **data storage** for the cluster state

<br>

#### Concept) kube-apiserver
Servers the k8s API, primary interface for the cluster

<br>

#### Concept) kube-controller-manager
Bundles several components into one package

<br>

#### Concept) kube-scheduler
Schedules pods to run on individual nodes

<br><br><br>



In addition to the control plane, each node also has...

#### Concept) kubelet
An agent that executes containers on each node, 
- It bridges between the container run times and the kube-apiserver.
- It runs the pod. Thus, not found with the *kubectl get pods n kube-system* command.
  - Instead check with the *systemctl kubelet* command.
    ```
    sudo systemctl status kubelet
    ```

<br>

#### Concept) kube-proxy
Handles network communication between nodes by adding firewall routing rules.



<br>

[Back to ACG K8s Essentials](../main.md)