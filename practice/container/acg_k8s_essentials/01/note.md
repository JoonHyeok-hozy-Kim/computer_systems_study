[Back to ACG K8s Essentials](../main.md)

# Introduction

### Concept) Kubernetes 
A tool for automated management of containerized applications, also known as a container orchestration tool.
- Official Kubernetes website: https://kubernetes.io/

<br>

### Concept) Containers
Containers wrap software in independent, portable packages,making it easy to quickly run software in a variety of environments.
- Props.)
  - Able to quickly and easily run it (almost) anywhere.
  - Great for automation!
  - Smaller and start up faster than VMs

<br>

### Concept) Orchestration
With **containers**, you can run a variety of software components across a cluster of generic servers.   
This can help ensure high **availability** and make it easier to **scale** resources.   
- This raises some questions:
  - How can I ensure that multiple instances of a piece of software are
spread across multiple servers for high availability?
  - How can I deploy new code changes and roll them out across the entire
cluster?
  - How can I create new containers to handle additional load (scale up)?
- Solution
  - Use an **orchestration tool** to automate these kinds of management tasks


<br>

[Back to ACG K8s Essentials](../main.md)