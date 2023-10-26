[Back to ACG K8s Quick Start](../main.md)

# Deployments

### Concept) Deployment Example
```
kubectl get deployment
```
![](images/001.png)
* Meta section   
  ![](images/002.png)
* Strategy   
  ![](images/003.png)
* Pod Template
  ![](images/004.png)

#### yaml example
![](images/005.png)
* Commands
  * Create
    ```
    kubectl create -f [yaml_file]
    ```
  * Describe
    ```
    kubectl describe service [service_name]
    ```
  * Update the image
    ```
    kubectl set image [repository] [image_name]:[tag]
    ```

<br>

[Back to ACG K8s Quick Start](../main.md)