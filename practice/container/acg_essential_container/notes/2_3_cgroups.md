# Cgroups
### Function
Isolate a process's ability and prohibit it from having access to the resources.

### Props.)
Allows its subsystems to have their own **INDEPENDENT** hierarchies
* One process can live in several trees!
* Traditional system assigns PID1 and subsidiaries have tree structure.

### Subsystems in Cgroups
* blkio (block IO)
  * Allows limiting and measuring the amount of I/Os for each group of processes
  * Allows setting throttle limits for each of the groups.
* cpu
  * Allows monitoring CPU usage by a group of processes 
  * Enables the user to set weights and keep track of usage per CPU
* cpuacct (cpu account)
  * Generates automatic reports on CPU resources used by tasks in a cgroup
* cpuset
  * Allows users to pin groups of processes to one CPU or to groups of a process
* devices
  * Allows or denies access to devices by tasks in a cgroup
* freezer
  * Suspends or resumes tasks in a cgroup.
  * The *sigstop* signal is sent to the whole container
* memory
  * Sets limits on memory use by tasks in a cgroup and generates automatic reports on memory resources
* net_cls
  * Tags network packets with a *classid* that allows the identification of packets originating from a particular cgroup task
* net_prio
  * Provides a way to set the priority of network traffic dynamically


