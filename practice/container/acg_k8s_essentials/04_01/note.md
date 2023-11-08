[Back to ACG K8s Essentials](../main.md)

# Kubernetes Deployments

### Concept) Deployment
- What is this?)
  - With deployment, we can specify a desired state for a set of pods.
  - Then, the cluster will constantly work to maintain that desired state.
- e.g.)
  - Scaling
    - We can specify the number of replicas of a certain pod.
  - Rolling Updates
    - We can automate the updates.
  - Self-Healing
    - If a pod is destroyed, the deployment will immediately spin up a new one and replace it.

<br>

### Hands on
- Create a deployment.
  ```
  cat <<EOF | kubectl create -f -apiVersion: apps/v1
  kind: Deployment
  metadata: 
      name: nginx-deployment  
      labels: 
          app: nginx 
  spec: 
      replicas: 2  
      selector: 
          matchLabels: 
              app: nginx  
      template: 
          metadata: 
              labels: 
                  app: nginx  
          spec:
              containers: 
                  - name: nginx
                  image: nginx:1.15.4 
                  ports:
                  - containerPort: 80
  EOF
  ```
  - 2 replicas of nginx will be created.

- Get a list of deployments:
  ```
  kubectl get deployments
  ```

- Get more information about a deployment:
  ```
  kubectl describe deployment [deployment_name]
  ```

- Get a list of pods:
  ```
  kubectl get pods
  ```

- Try deleting a pod.
  ```
  kubectl delete pod [pod_name]
  ```
  - Then the deployment will be instantly create a new one.
<br>

[Back to ACG K8s Essentials](../main.md)