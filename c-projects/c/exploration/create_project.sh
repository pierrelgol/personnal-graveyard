#!/bin/bash

# Get project name from user
read -p "Enter project name: " project_name

# Clone new_project_template repo
git clone https://github.com/pierrelgol/new_project_template.git "$project_name"

# Remove .git directory
cd "$project_name" && rm -rf .git && cd ..

# Rename project folder
mv "$project_name"/my_project "$project_name"/"$project_name"

# Add project folder to PATH
echo "export PATH=\"$PWD/$project_name/bin:\$PATH\"" >> ~/.bashrc

# Source .bashrc to apply changes
source ~/.bashrc

echo "Project folder created: $project_name"
echo "Project folder added to PATH"

