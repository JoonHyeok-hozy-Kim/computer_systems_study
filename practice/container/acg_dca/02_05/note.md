[Back to ACG DCA](../main.md)

# Running a Container

## Run a simple container.
```
docker run hello-world
```

## Run a container using a specific image tag.
```
docker run nginx:1.15.11
```
- cf.) nginx will not stop until interrupting with *ctrl+c*

## Run a container with a command and arguments.
```
docker run busybox echo hello world!
```
- Run busybox container and run the command, *echo hello world!*, in it.

## Run an Nginx container customized with a variety of flags.
```
docker run -d --name nginx --restart unless-stopped -p 8080:80 --memory 500M --memory-reservation 256M nginx
```
- Options used
  |Option|Meaning|
  |:-----|:------|
  |-d, --detach              |           Run container in background and print container ID|
  |--name [string]             |       Assign a name to the container|
  |--restart [string]          | - no : Never restart the container. <br> - on-failure : Only if the container fails. <br> - always : Always restart the container whether it succeeds or fails. Also starts the container automatically on daemon startup. <br> - unless-stopped : Always restart the container whether it succeeds or fails, and on daemon startup, unless the container was manually stopped.       |
  |-p, --publish list        |           Publish a container's port(s) to the host|
  |-m, --memory [bytes]        |           Memory limit|
  |--memory-reservation [bytes]|       Memory soft limit|


## List any currently running containers:
```
docker ps
```

## List all containers, both running and stopped:
```
docker ps -a
```


## Stop the Nginx container:
```
docker container stop nginx
```

## Start a stopped container:
```
docker container start nginx
```


## Delete a container (but it must be stopped first):
```
docker container rm nginx
```

<br>

[Back to ACG DCA](../main.md)