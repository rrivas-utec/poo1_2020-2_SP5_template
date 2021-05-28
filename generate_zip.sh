#!/usr/bin/env bash

project_name=task_5
source_code='sp5.h sp5.cpp clases.h'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}