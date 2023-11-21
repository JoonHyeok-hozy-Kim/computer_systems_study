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
    <td>Usage</td>
  </tr>
  <tr>
    <td><code>docker pull [image_name:tag]</code><br><code>docker image pull [image_name:tag]</code></td>
    <td>Pull (download) an image</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker image history [image_name:tag]</code></td>
    <td>List the layers used to build an image</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker image ls</code><br><code>docker images</code></td>
    <td>List images</td>
    <td></td>
  </tr>
  <tr>
    <td><code>docker image inspect [image_name:tag]</code></td>
    <td>Get detailed information about an image</td>
    <td>Use Go template to get only a subset of information. <br> <code>docker image inspect [image_name:tag] --format [template_text]</code> </td>
  </tr>
</table>

<br>

[Back to ACG DCA](../main.md)