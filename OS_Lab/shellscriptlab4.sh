#!/bin/bash

read -p "Enter some text" text
if echo "$text" | grep -q '[A-Z]'; then
echo "Text contains uppercase letters"
fi

if echo "$text" | grep -q '[a-z]'; then
echo "Text contains lowercase letters"
fi

if echo "$text" | grep -q '[0-9]'; then
echo "Text contains digits"
fi 

if echo "$text" | grep -q ' '; then
echo "Text contains white spaces"
fi

if echo "$text" | grep -q ','; then
echo "Text contains commas"
fi

a=$text
while [ read $a ]

