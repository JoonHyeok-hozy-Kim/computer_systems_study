[Back to ACG K8s Essentials](../main.md)

# CHAPTER 2.6 - Configuring Networking with Calico

#### Install Calico in the cluster by running this only on the Master node:
```
kubectl apply -f https://raw.githubusercontent.com/projectcalico/calico/v3.25.0/manifests/calico.yaml
```

#### Verify that all the nodes now have a STATUS of "Ready":
```
kubectl get nodes
```

#### You should see all three of your servers listed, and all should have a STATUS of "Ready". It should look something like this:

|NAME                           |STATUS   |ROLES           |AGE     |VERSION|
|:-|:-:|:-:|:-:|:-:|
|f8bbdd78c31c.mylabserver.com   |Ready    |control-plane   |3m18s   |v1.24.0|
|f8bbdd78c32c.mylabserver.com   |Ready    |<none>          |2m21s   |v1.24.0|
|f8bbdd78c33c.mylabserver.com   |Ready    |<none>          |2m5s    |v1.24.0|

* Note: It may take a few moments for all nodes to enter the "Ready" status, so if they are not all "Ready", wait a few moments and try again.

#### It is also a good idea to verify that the Calico pods are up and running. Run this command to get a list of system pods:
```
kubectl get pods -n kube-system
```

#### Expected output:

|NAME                                                   |READY   |STATUS    |RESTARTS   |AGE|
|:-|:-:|:-:|:-:|:-:|
|calico-kube-controllers-55fc758c88-sklwx               |1/1     |Running   |0          |66s|
|calico-node-2qdd4                                      |1/1     |Running   |0          |66s|
|calico-node-6cblh                                      |1/1     |Running   |0          |66s|
|calico-node-g2czn                                      |1/1     |Running   |0          |66s|
|coredns-6d4b75cb6d-b8m4m                               |1/1     |Running   |0          |3m32s|
|coredns-6d4b75cb6d-r99sr                               |1/1     |Running   |0          |3m32s|
|etcd-f8bbdd78c31c.mylabserver.com                      |1/1     |Running   |0          |3m44s|
|kube-apiserver-f8bbdd78c31c.mylabserver.com            |1/1     |Running   |0          |3m46s|
|kube-controller-manager-f8bbdd78c31c.mylabserver.com   |1/1     |Running   |0          |3m45s|
|kube-proxy-7nx42                                       |1/1     |Running   |0          |2m35s|
|kube-proxy-866ws                                       |1/1     |Running   |0          |3m32s|
|kube-proxy-sbdms                                       |1/1     |Running   |0          |2m51s|
|kube-scheduler-f8bbdd78c31c.mylabserver.com            |1/1     |Running   |0          |3m44s|

#### You should have three pods with "calico" in the name, and all three should have a status of "Running".

<br>

[Back to ACG K8s Essentials](../main.md)