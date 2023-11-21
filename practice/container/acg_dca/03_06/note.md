[Back to ACG DCA](../main.md)

# Flattening a Docker Image to a Single Layer

### Concept) Flattening an Image
- In few cases, you may want to take an image with many layers and flatten them into a single layer.
- Docker does not provide an official method for doing this.
  - why?)
    - It goes against [the Docker philosophy](../03_01/note.md#concept-layered-file-system).
- Still, you can accomplish this by...
  1. Run a container from the image.
  2. Export the container to an archive using ```docker export```.
  3. Import the archive as a new image using ```docker import```.
- As a result, the image will have only one layer.

<br>

[Back to ACG DCA](../main.md)