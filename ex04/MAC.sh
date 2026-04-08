#!/bin/sh

ip addr | grep ether | awk '{print $2}'
