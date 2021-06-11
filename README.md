# Set de Problemas #5

Ejercicios sobre arreglos/vectores, matrices y objetos del curso de programación orientada a objetos 1 (CS1102).

## Ejercicio #1 - Concatenar arreglos

### Problem Statement  

Escribir un programa que recibe inicialmente 2 números **`(n1, n2)`** x para definir el tamano de 2 arreglos, adicionalmente debe ingresarse los `n1+n2`, los primeros `n1` valores se almacenan en el primer arreglo y los demás `n2` valores se almacenan en el segundo arreglo. Utilizando la función **`concatenar_arreglos`** generar un arreglo equivalente a la concatenación de los primeros arreglos y luego de generada mostrar sus valores.  

La función **`concatenar_arreglos`** debe como parametros 2 arreglos y sus tamaños y utilizando el valor de retorne devolver un arreglo que contendra los valores de los 2 arreglos. la función debe seguir la siguiente cabecera:  
```cpp
int* concatenar_arreglos(int* arreglo_1, int cantidad_1, int* arreglo_2, int cantidad_2);
```


#### Input Format  

```bash
2 3
1
2
10
20
30
```

#### Constraints  

```bash
- No utizar etiquetas.
- Los tamaños de los arreglos deben ser mayores o iguales a 1.
```

#### Output Format

```bash
1 2 10 20 30 
```
#### Ejemplo 1
**Input**
```bash
1 1
4
5
```
**Output**
```bash
4 5 
```
#### Ejemplo 2
**Input**
```bash
6 1
1
2
3
4
5
6
7
```
**Output**
```bash
1 2 3 4 5 6 7 
```
#### Ejemplo 3
**Input**
```bash
1 5
10
9
8
7
6
5
```
**Output**
```bash
10 9 8 7 6 5 
```

## Ejercicio #2 - Arreglo y sus valores  

### Problem Statement

Escribir un programa que utilizando la función `generar_arreglo` reciba 3 números enteros, el **primer número** define el tamaño de un arreglo, el **segundo número** define el valor con el que debe ser llenado y el **tercer número** los pasos donde deben colocarse el valor empezando en la posicion 0 y sumando a las posiciones el tercer valor hasta donde sea posible agregar el valor sin rebasar la maxima posicion posible, a continuación se muestra la cabecera de la función:

```cpp
int* generar_arreglo(int cantidad, int valor, int step);
```

#### Input Format
```bash
10 1 3
```
Constraints
```bash
- No debe utilizarse etiquetas (std::cout) para ingresar los valores
- El tamaño del arreglo debe ser positivo y mayor a los steps
```
Output Format
```bash
1 0 0 1 0 0 1 0 0 1 
```
#### Ejemplo 1
**Input**
```bash
9 5 5
```
**Output**
```bash
5 0 0 0 0 5 0 0 0 
```
#### Ejemplo 2
**Input**
```bash
8 3 1
```
**Output**
```bash
3 3 3 3 3 3 3 3 
```

## Ejercicio #3 - Número en secuencia

### Problem Statement  
Escribir un programa que utilizando la función `numeros_en_secuencia` verifique que los numeros enteros almacenados en un vector de tamaño **`n`** sean numeros consecutivos. los valores dentro del vector podrian no estar ordenados numeros_en_secuencia. 

Desarrollar la función `numeros_en_secuencia` que tenga el parametro como se muestra en la siguiente cabecera:

```cpp
bool numeros_en_secuencia(vector<int> numeros);
```

Input Format
```bash
4
4 2 3 5
```
Constraints
```bash
- Números enteros positivos
- No utilizar etiquetas
```
Output Format
```bash
Consecutivos
```
#### Ejemplo 1
**Input**
```bash
10
4 12 9 11 8 7 6 5 3 10
```
**Output**
```bash
Consecutivos
```
#### Ejemplo 2
**Input**
```bash
5
20 10 40 30 60
```
**Output**
```bash
No consecutivos
```
## Ejercicio #4 - Mini Sudoku

### Problem Statement
Un sudoku es una tabla de 9x9 y es completada en 9 recuadros de 3x3, eso significa que en cada recuadro de 3x3 debe incluir los números del 1 al 9.

Escribir un programa donde el usuario debera ingresar 3 filas con 3 valores con dígitos desde 1 hasta 9, el programa debe verificar que no haya dígitos repeticiones, ni que esten fuera del rango de 1 a 9 y retornar si es válido o no, para el desarrollo de este programa se pide que desarrolle la siguiente función:  
```cpp
bool es_sudoku_cuadrante_valido(int** cuadrante, int nfil, int ncol);
```  

## Input Format
```bash
1 2 4
4 5 6
1 3 4
```
## Constraints
```bash
- No utilizar etiquetas
- El número a ingresar debe ser positivo y grandes
```
## Output Format
```bash
Invalido
```
#### Ejemplo 1
**Input**
```bash
1 3 4
2 5 7
6 9 8
```
**Output**
```bash
Valido
```
#### Ejemplo 2
**Input**
```bash
4 3 2
1 1 2
0 2 3
```
**Output**
```bash
Invalido
```
#### Ejemplo 3
**Input**
```bash
1 4 5
9 2 6
7 8 3
```
**Output**
```bash
Valido
```

## Ejercicio #5 - Cuadrado mágico

### Problem Statement
Un cuadrado mágico es una matriz cuadrada que tiene como propiedad especial que la suma de las filas, las columnas y las diagonales es igual. Por ejemplo:

```bash
2 7 6 
9 5 1 
4 3 8
```

Esta matriz la suma de filas, columnas y diagonales es 15.

Escribir un programa que lea una matriz de 3x3 y que verifique si es un cuadrado mágico, para el desarrollo de este programa se pide que escriba y use la siguiente función:

```cpp
bool es_cuadrado_magico(int** magico, int lado);
```

### Input Format
```bash
2 7 6 
9 5 1 
4 3 8
```
### Constraints
```
- No utilizar etiquetas
- Numeros enteros
```
### Output Format
```bash
Cuadrado magico!
```

#### Ejemplo 1
**Input**
```bash
1 1 1
1 1 1
1 1 1
```
**Output**
```bash
Cuadrado magico!
```
#### Ejemplo 2
**Input**
```bash
1 2 3
1 3 4
0 4 1
```
**Output**
```bash
No es cuadrado magico
```
## Ejercicio #6 - Máximo Común Divisor

### Problem Statement

Escribir un programa que lea una matriz cuadrada y que calcule el MCD de las filas, luego el MCD de las diagonales y finalmente calcular el MCD de las columnas y retornarlos en un vector en ese orden primero MCD de filas luego diagonales y columnas, para el desarrollo de este programa se pide que escriba y use la siguiente función:

```cpp
vector<int> obtener_maximo_comun_divisores(const vector<vector<int>>& matriz);
```

### Input Format
```bash
24 5 6
2 14 12
8 7 21
```

### Constraints
```bash
- No utilizar etiquetas
- Numeros enteros
- Generar la matriz usando vectores 
```
### Output Format
```bash
1 2 1 1 2 2 1 3
```
#### Ejemplo 1
**Input**
```bash
24 50 60
21 12 36
8 720 78
```
**Output**
```bash
2 3 2 6 4 1 2 6
```
