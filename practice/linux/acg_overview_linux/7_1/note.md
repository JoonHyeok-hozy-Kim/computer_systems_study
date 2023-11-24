[Back to Linux Overview Main](../main.md)

# Finding Vulnerabilities

### Concept) Resources to learn about vulnerabilities
- [Mitre Organization CVE](https://cve.mitre.org/)
- [National Vulnerability Database CVE](https://nvd.nist.gov/)
- Linux Distribution's Official Website
  - [Red Hat CVE](https://access.redhat.com/security/security-updates/cve)
  - [Ubuntu CVE](https://ubuntu.com/security/cves?offset=140)

<br>

### Concept) The CIA Model
- Desc.)
  - A standard security model
    - Confidentiality
      - Restrict Access (Principle of Least Privilege)
    - Integrity
      - Keep the data safe
      - Data change or destruction must be tightly controlled.
    - Availability
      - Allow access that are needed.

<br>

### Concept) Internal and External Security
- Control open ports.
- Use internal/external firewall for the internal/external connections
- Load balancer or proxies may protect the computer by providing isolation

<br>

### Concept) Tools
- SELinux
- AppArmor
- File system controls
- AIDE
  - Run with batch or manually
- OSSEC
  - Runs as a service
- Nmap
  - Runs on demand
- Nessus
- Wireshark
- Snort
  - Intrusion prevention system
- chkrootkit or rkhunter

<br><br>

[Back to Linux Overview Main](../main.md)