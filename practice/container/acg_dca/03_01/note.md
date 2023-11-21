[Back to ACG DCA](../main.md)

# Docker Images

### Concept) Docker Image
- Def.)
  - A file containing the code and components needed to run software in a container.   

<br>

### Concept) Layered File System
- Usage)
  - Containers and images use a layered file system.
    - Each layer contains only the differences from the previous layer.
      - e.g.) nginx   
        ![](images/001.png)
  - The image consists of on or more read-only layers, while the container adds one addition writable layer.    
    ![](images/002.png)
- Advantage)
  - Allows multiple images and containers to share the same layers.
    - Smaller overall storage footprint
    - Faster image transfer
    - Faster image build 

<br>

### Tech) Image Related Commands
<table>
  <tr>
    <td>Command</td>
    <td>Meaning</td>
  </tr>
  <tr>
    <td><code>docker pull [image_name:tag]</code><br><br><code>docker image pull [image_name:tag]</code></td>
    <td>- Pull (download) an image</td>
  </tr>
  <tr>
    <td><code>docker image history [image_name:tag]</code></td>
    <td>- List the layers used to build an image</td>
  </tr>
  <tr>
    <td><code>docker image ls</code><br><br><code>docker images</code></td>
    <td>List images</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker image inspect [image_name:tag]</code></td>
    <td>- Get detailed information about an image in json format. <br><br>- Use Go template to get only a subset of information. <br> <code>docker image inspect [image_name:tag] --format [template_text]</code> <br> <img src="images/003.png"> </td>
  </tr>
  <tr>
    <td><code>docker image rm [image_name:tag]</code> <br><br> <code>docker rmi [image_name:tag]</code></td>
    <td>- Delete an image.</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker image prune</code></td>
    <td>- Delete unused (dangling) images from the system.</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker run [image_name:tag]</code></td>
    <td>- Run an image.</td>
    <td></td>
  </tr>
</table>

<br>

[Back to ACG DCA](../main.md)