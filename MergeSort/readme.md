
## Merge Sort

O algoritmo merge sort é um algoritmo de ordenação que segue a abordagem "dividir para conquistar". Ele divide a lista de entrada em duas metades, recursivamente ordena cada metade e, em seguida, mescla as metades ordenadas para obter uma lista totalmente ordenada.

### Funcionamento

1. **Divisão**: O primeiro passo do merge sort é dividir o array não ordenado em duas metades, de forma recursiva. Essa divisão ocorre até que cada subarray tenha apenas um elemento (o que é considerado ordenado por definição).

2. **Ordenação**: Em seguida, começa a etapa de ordenação. Duas metades adjacentes são comparadas elemento por elemento e mescladas em ordem crescente. Esse processo de mesclagem é repetido recursivamente até que todas as metades sejam mescladas em uma única lista ordenada.

3. **Mesclagem**: Durante a mesclagem, dois ponteiros são usados para acompanhar a posição atual em cada subarray. Os elementos nos subarrays são comparados, e o menor elemento é colocado na posição correta na lista final.

4. **Recursão**: O processo de divisão, ordenação e mesclagem é repetido de forma recursiva para cada subarray gerado. Isso continua até que todas as metades tenham sido ordenadas e mescladas.

5. **Retorno**: No final do processo, temos um único array ordenado contendo todos os elementos.

O merge sort tem uma complexidade de tempo consistente, garantindo um desempenho de O(n log n) no pior caso, onde "n" é o número de elementos a serem ordenados. Além disso, o merge sort é um algoritmo estável, o que significa que ele preserva a ordem relativa de elementos iguais durante a ordenação.

