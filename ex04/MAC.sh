#!/bin/sh

ip a | grep ether | awk '{print $2}'
