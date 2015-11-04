#!/bin/bash 
echo 1 > /proc/sys/net/ipv4/ip_forward
/sbin/iptables -t nat -A POSTROUTING -o enp0s29u1u1 -j MASQUERADE
/sbin/iptables -A FORWARD -i enp0s29u1u1 -o enp19s0 -m state --state RELATED,ESTABLISHED -j ACCEPT
/sbin/iptables -A FORWARD -i enp19s0 -o enp0s29u1u1 -j ACCEPT