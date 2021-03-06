#!/bin/bash

#/////////////////////////////////////////////////////////////////////////////////
#  Identificación del alumno
#
#  Nombre Completo:Alejandro Javier Oliveros Vera
#/////////////////////////////////////////////////////////////////////////////////

#/////////////////////////////////////////////////////////////////////////////////
#//   Usage:
#//           ./run_experiments --matrix <ruta_al_archivo_de_datos> --repeticiones <nro>
#//
#//   Description:
#//           -->Completar la descripción
#//
#/////////////////////////////////////////////////////////////////////////////////

while getopts matrix:repeticiones: flag
do
    case "${flag}" in
        matrix) matrix=${OPTARG};;
        repeticiones) repeticiones=${OPTARG};;
    esac
done

for i in {1.."$repeticiones"}; do cmd.run "./matrixMult --matrix $matrix"; done