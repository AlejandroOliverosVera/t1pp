#!/usr/bin/env gnuplot

#---------------------------
#  Identificación del alumno
#
#  Nombre Completo: Alejandro Javier Oliveros Vera
#----------------------------

set encoding iso_8859_1
set term png size 800,600

set datafile separator ":"

set title "Tiempos de ejecución métodos ijk y kij para multiplicación de matrices"
set xlabel "Tamaño matriz"
set ylabel "Tiempo de ejecución"
set output "boxplot.png"

set xtics auto
set yrange [*:25000]
set logscale y 10
set format y "10^{%L}"
set autoscale xfix
set autoscale yfix
set style fill solid 0.5 border -1
set style boxplot outliers pointtype 7
set style data boxplot
set boxwidth  0.5
set pointsize 0.5
set key bottom right

set samples 30

plot 'resultados.txt' using (1+0.3):2:(0.25):1 title "ijk",\
     'resultados.txt' using (1-0.2):3:(0.25):1 title "kij",\

#----------------------------

set encoding iso_8859_1
set term png size 800,600

set datafile separator ":"

set title "Tiempos de ejecución métodos ijk y kij para multiplicación de matrices"
set xlabel "Tamaño matriz"
set ylabel "Tiempo de ejecución"
set output "boxplot-2.png"

set xtics auto
set yrange [*:25000]
#set logscale y 10
#set format y "10^{%L}"
unset logscale
unset format y
set autoscale xfix
set autoscale yfix
set style fill solid 0.5 border -1
set style boxplot outliers pointtype 7
set style data boxplot
set boxwidth  0.5
set pointsize 0.5
set key bottom right

plot 'resultados.txt' using (1+0.3):2:(0.25):1 title "ijk",\
     'resultados.txt' using (1-0.2):3:(0.25):1 title "kij",\