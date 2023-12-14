[Back to ACG DCA](../main.md)

# [Hands on Lab] Docker Stack

### Objective)

<p class="chakra-text css-bxak8j">Here is some background information on the three services:</p>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp"><strong>Fruit Service</strong></li></ol>
<ul role="list" class="css-19qh3zo"><li class="css-cvpopp">Provides a list of fruits sold in the company's stores.</li><li class="css-cvpopp">You can use the Docker image tag <code class="chakra-code css-117v1z8">linuxacademycontent/fruit-service:1.0.1</code> to run this service.</li><li class="css-cvpopp">Listens on port <code class="chakra-code css-117v1z8">80</code>.</li><li class="css-cvpopp">The service should be named <code class="chakra-code css-117v1z8">fruit</code> inside the stack.</li></ul>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp"><strong>Vegetable Service</strong></li></ol>
<ul role="list" class="css-19qh3zo"><li class="css-cvpopp">Provides a list of vegetables sold in the company's stores.</li><li class="css-cvpopp">You can use the Docker image tag <code class="chakra-code css-117v1z8">linuxacademycontent/vegetable-service:1.0.0</code> to run this service.</li><li class="css-cvpopp">Listens on port <code class="chakra-code css-117v1z8">80</code>.</li><li class="css-cvpopp">The service should be named <code class="chakra-code css-117v1z8">vegetables</code> inside the stack.</li></ul>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp"><strong>All Products Service</strong></li></ol>
<ul role="list" class="css-19qh3zo"><li class="css-cvpopp">Queries the other two services, combining their data into a single list of all produce.</li><li class="css-cvpopp">You can use the Docker image tag <code class="chakra-code css-117v1z8">linuxacademycontent/all-products:1.0.0</code> to run this service.</li><li class="css-cvpopp">Listens on port <code class="chakra-code css-117v1z8">80</code>.</li><li class="css-cvpopp">Use the environment variables <code class="chakra-code css-117v1z8">FRUIT_HOST</code> and <code class="chakra-code css-117v1z8">FRUIT_PORT</code> to set the host and port which will be used to query the fruit service.</li><li class="css-cvpopp">Use the environment variables <code class="chakra-code css-117v1z8">VEGETABLE_HOST</code> and <code class="chakra-code css-117v1z8">VEGETABLE_PORT</code> to set the host and port which will be used to query the vegetable service.</li></ul>
<h2 class="chakra-heading css-6rvmc6">Step 1</h2>
<p class="chakra-text css-bxak8j">Deploy a Docker application stack that meets the following specifications:</p>
<ul role="list" class="css-19qh3zo"><li class="css-cvpopp">The stack is called <code class="chakra-code css-117v1z8">produce</code>.</li><li class="css-cvpopp">The stack runs the <em class="chakra-text css-0">Fruit</em>, <em class="chakra-text css-0">Vegetable</em>, and <em class="chakra-text css-0">All Products</em> services.</li><li class="css-cvpopp">The <em class="chakra-text css-0">All Products</em> service is able to query the <em class="chakra-text css-0">Fruit</em> and <em class="chakra-text css-0">Vegetable</em> services.</li><li class="css-cvpopp">The <em class="chakra-text css-0">All Products</em> service is published on port <code class="chakra-code css-117v1z8">8080</code>.</li></ul>
<p class="chakra-text css-bxak8j">One you have deployed the stack, you can verify whether it is working by querying the <em class="chakra-text css-0">All Products</em> service:</p>
<pre class="css-0"><code class="chakra-code css-vbh4rm" d="block">curl localhost:8080
</code></pre>
<p class="chakra-text css-bxak8j">If the stack is set up correctly, you should get a combined list of fruits and vegetables.</p>
<h2 class="chakra-heading css-6rvmc6">Step 2</h2>
<p class="chakra-text css-bxak8j">Once you have deployed the stack and verified that it is working, modify the stack by scaling both the <em class="chakra-text css-0">Fruit</em> and <em class="chakra-text css-0">Vegetable</em> services up to <code class="chakra-code css-117v1z8">3</code> replicas.</p>
<p class="chakra-text css-bxak8j">If you get stuck, feel free to check out the solution video, or the detailed instructions under each objective. Good luck!</p></div></div></div><div class="css-1rges9e"><div class="css-kkbmcm"><div class="css-70qvj9"><div class="css-125fwne"><div class="css-0"><div data-testid="card-icon" class="css-ol7uq3"><div><div><svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 21 26" version="1.1" class="injected-svg" data-src="/static/images/svg-icons/gradient-checklist.svg"><!--Generator: Sketch 63.1 (92452) - https://sketch.com--><defs><linearGradient x1="17.3816568%" y1="0%" x2="88.495164%" y2="112.087865%" id="a-13"><stop stop-color="#261E7D" offset="0%"></stop><stop stop-color="#02E088" offset="59.2562289%"></stop><stop stop-color="#FFFFFF" offset="99.9762458%"></stop></linearGradient></defs><g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd"><g transform="translate(-834.000000, -888.000000)"><g transform="translate(818.000000, 861.000000)"><g transform="translate(0.000000, 15.000000)"><g transform="translate(13.000000, 12.000000)"><g><rect x="0" y="0" width="27" height="27"></rect></g><g transform="translate(3.000000, 0.000000)" fill="url(#a-13)" fill-rule="nonzero"><g><path d="M10.5,0 C12.6676667,0 14.4795,1.44808696 15.001,3.39130435 L15.001,3.39130435 L16.3333333,3.39130435 L16.3333333,5.65217391 L18.6666667,5.65217391 C19.9535,5.65217391 21,6.66730435 21,7.91304348 L21,7.91304348 L21,23.7391304 C21,24.986 19.9535,26 18.6666667,26 L18.6666667,26 L2.33333333,26 C1.0465,26 0,24.986 0,23.7391304 L0,23.7391304 L0,7.91304348 C0,6.66730435 1.0465,5.65217391 2.33333333,5.65217391 L2.33333333,5.65217391 L4.66666667,5.65217391 L4.66666667,3.39130435 L5.999,3.39130435 C6.5205,1.44808696 8.33233333,0 10.5,0 Z M4.66666667,7.91304348 L2.33333333,7.91304348 L2.33333333,23.7391304 L18.6666667,23.7391304 L18.6666667,7.91304348 L16.3333333,7.91304348 L16.3333333,10.173913 L4.66666667,10.173913 L4.66666667,7.91304348 Z M14.3418333,12.766 L15.9915,14.3644348 L9.33333333,20.8169565 L5.0085,16.6253043 L6.65816667,15.0268696 L9.33333333,17.6189565 L14.3418333,12.766 Z M14,5.65217391 L7,5.65217391 L7,7.91304348 L14,7.91304348 L14,5.65217391 Z M10.5,2.26086957 C9.63783333,2.26086957 8.88416667,2.71530435 8.47933333,3.39130435 L8.47933333,3.39130435 L12.5195,3.39130435 C12.1158333,2.71530435 11.3621667,2.26086957 10.5,2.26086957 Z"></path></g></g></g></g></g></g></g></svg></div></div></div></div></div><div class="css-j7qwjs"><p class="chakra-heading css-9tpee1" data-chakra="true"></p><h2 class="chakra-heading css-wmwe9p">Learning Objectives</h2></div></div><div data-testid="card-headerBarExtraContent" class="css-hoe9xz"><p class="chakra-text css-1bskceo">0 of 2 completed</p></div></div><div class="css-xjv02e"><div class="css-z2a5mz"><div aria-hidden="true"><div class="css-429b8o"><div class="css-wmhpuc"><div class="css-1r2gdab"><label class="chakra-checkbox css-1577qb8"><input class="chakra-checkbox__input" type="checkbox" value="" style="border: 0px; clip: rect(0px, 0px, 0px, 0px); height: 1px; width: 1px; margin: -1px; padding: 0px; overflow: hidden; white-space: nowrap; position: absolute;"><span class="chakra-checkbox__control css-e9m96y" aria-hidden="true"></span></label><p class="chakra-text css-1k7hleq">Build and deploy the application stack.</p></div><div class="css-1axngrb"><div data-chakra="true" class="rotatable css-1lbirhy"><svg xmlns="http://www.w3.org/2000/svg" aria-label="caret pointing down" viewBox="0 0 24 24" role="img" fill="currentColor" class="ps-icon-svg" width="24"><path fill-rule="evenodd" d="M12.354 15.646a.5.5 0 0 1-.707 0l-4.793-4.792A.5.5 0 0 1 7.207 10h9.586a.5.5 0 0 1 .354.854l-4.793 4.792Z" clip-rule="evenodd"></path></svg></div></div></div><div class="css-1tp09g4"><div color="#C1C0D1" class="sc-SrznA fvTCzk"><ol role="list" class="css-13a5a39"><li class="css-cvpopp">Create an empty project directory with a Docker compose YAML file inside.</li></ol>
<pre class="css-0"><code class="chakra-code css-vbh4rm" d="block">cd ~/
mkdir produce
cd produce
vi produce.yml
</code></pre>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp">Build a stack definition in <code class="chakra-code css-117v1z8">produce.yml</code> to meet the provided specifications.</li></ol>
<pre class="css-0"><code class="chakra-code css-vbh4rm" d="block">version: '3'
services:
   fruit:
     image: linuxacademycontent/fruit-service:1.0.1
   vegetables:
     image: linuxacademycontent/vegetable-service:1.0.0
   all_products:
     image: linuxacademycontent/all-products:1.0.0
     ports:
     - "8080:80"
     environment:
     - FRUIT_HOST=fruit
     - FRUIT_PORT=80
     - VEGETABLE_HOST=vegetables
     - VEGETABLE_PORT=80
</code></pre>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp">Deploy the stack using the compose file.</li></ol>
<pre class="css-0"><code class="chakra-code css-vbh4rm" d="block">docker stack deploy -c produce.yml produce
</code></pre>
<ol role="list" class="css-13a5a39"><li class="css-cvpopp">Verify that the stack is working.</li></ol>
<pre class="css-0"><code class="chakra-code css-vbh4rm" d="block">curl localhost:8080
</code></pre>
<p class="chakra-text css-bxak8j">Note that after deploying, it may take a few moments for the stack to become responsive. You can check the status of the services with <code class="chakra-code css-117v1z8">docker stack services produce</code>. Once the services are up and running, you should get some JSON data containing a combined list of fruits and vegetables.</p>


<br>

#### Sol)
```yaml
version: '3'
services:
   fruit:
     image: linuxacademycontent/fruit-service:1.0.1
   vegetables:
     image: linuxacademycontent/vegetable-service:1.0.0
   all_products:
     image: linuxacademycontent/all-products:1.0.0
     ports:
     - "8080:80"
     environment:
     - FRUIT_HOST=fruit
     - FRUIT_PORT=80
     - VEGETABLE_HOST=vegetables
     - VEGETABLE_PORT=80
```


<br>

[Back to ACG DCA](../main.md)