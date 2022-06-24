# Data-Processing-Algorithms
This repository will collect data processing algorithms in the cpp programming language

***

В данном репозитории будут собраны алгоритмы обработки данных на языке программирования cpp

### Сортировка простыми обменами, сортировка пузырьком (англ. Bubble Sort) 
Алгоритм состоит из повторяющихся проходов по сортируемому массиву. За каждый проход элементы последовательно сравниваются попарно и, если порядок в паре неверный, выполняется перестановка элементов. Проходы по массиву повторяются N-1 раз или до тех пор, пока на очередном проходе не окажется, что обмены больше не нужны, что означает — массив отсортирован. При каждом проходе алгоритма по внутреннему циклу очередной наибольший элемент массива ставится на своё место в конце массива рядом с предыдущим «наибольшим элементом», а наименьший элемент перемещается на одну позицию к началу массива («всплывает» до нужной позиции, как пузырёк в воде — отсюда и название алгоритма).

* Сложность: O(n^2).

***

### Сортировка выбором (англ. Selection Sort)
Суть алгоритма заключается в том, что мы берем первый элемент массива, и бегаем по всему оставшемуся массиву в поисках числа меньше нашего первого элемента. Когда мы пробегаем весь массив, если меньшее число найдено — меняем его местами с первым элементом.

* Сложность: O(n^2).

***

### Сортировка перемешиванием, или Шейкерная сортировка, или двунаправленная (англ. Cocktail Sort) 
Разновидность пузырьковой сортировки.
Анализируя метод пузырьковой сортировки, можно отметить два обстоятельства.
Во-первых, если при движении по части массива перестановки не происходят, то эта часть массива уже отсортирована и, следовательно, её можно исключить из рассмотрения.
Во-вторых, при движении от конца массива к началу минимальный элемент «всплывает» на первую позицию, а максимальный элемент сдвигается только на одну позицию вправо.
Эти две идеи приводят к следующим модификациям в методе пузырьковой сортировки. Границы рабочей части массива (то есть части массива, где происходит движение) устанавливаются в месте последнего обмена на каждой итерации. Массив просматривается поочередно справа налево и слева направо.

* Сложность: O(n^2).

***

### Сортировка вставками (англ. Insertion sort)

Aлгоритм сортировки, в котором элементы входной последовательности просматриваются по одному, и каждый новый поступивший элемент размещается в подходящее место среди ранее упорядоченных элементов.
Задача заключается в следующем: есть часть массива, которая уже отсортирована, и требуется вставить остальные элементы массива в отсортированную часть, сохранив при этом упорядоченность. Для этого на каждом шаге алгоритма мы выбираем один из элементов входных данных и вставляем его на нужную позицию в уже отсортированной части массива, до тех пор пока весь набор входных данных не будет отсортирован. Метод выбора очередного элемента из исходного массива произволен, однако обычно (и с целью получения устойчивого алгоритма сортировки), элементы вставляются по порядку их появления во входном массиве.

* Сложность: O(n^2).

***

### Сортировка Шелла (англ. Shell sort)

Алгоритм сортировки, являющийся усовершенствованным вариантом сортировки вставками. Идея метода Шелла состоит в сравнении элементов, стоящих не только рядом, но и на определённом расстоянии друг от друга. Иными словами — это сортировка вставками с предварительными «грубыми» проходами. Аналогичный метод усовершенствования пузырьковой сортировки называется сортировка расчёской.

* Сложность: O(n^(1,2)).

***

### Пирамидальная сортировка (англ. Heapsort, «Сортировка кучей»)

Алгоритм сортировки, работающий в худшем, в среднем и в лучшем случае (то есть гарантированно) за O(n\log n) операций при сортировке n элементов. Количество применяемой служебной памяти не зависит от размера массива (то есть, O(1)).
Может рассматриваться как усовершенствованная сортировка пузырьком, в которой элемент всплывает (min-heap) / тонет (max-heap) по многим путям.

Сортировка пирамидой использует бинарное сортирующее дерево. Сортирующее дерево — это такое дерево, у которого выполнены условия:

    1. Каждый лист имеет глубину либо d, либо d-1, d — максимальная глубина дерева.
    2. Значение в любой вершине не меньше (другой вариант — не больше) значения её потомков.
Удобная структура данных для сортирующего дерева — такой массив Array, что Array[0] — элемент в корне, а потомки элемента Array[i] являются Array[2i+1] и Array[2i+2].

Алгоритм сортировки будет состоять из двух основных шагов:

1. Выстраиваем элементы массива в виде сортирующего дерева[источник не указан 2072 дня]:

Array[i] >= Array[2i+1];
Array[i] >= Array[2i+2];

при 0 <= i < n/2

Этот шаг требует O(n) операций.

2. Будем удалять элементы из корня по одному за раз и перестраивать дерево. То есть на первом шаге обмениваем Array[0] и Array[n-1], преобразовываем Array[0], Array[1], … , Array[n-2] в сортирующее дерево. Затем переставляем Array[0] и Array[n-2], преобразовываем Array[0], Array[1], … , Array[n-3] в сортирующее дерево. Процесс продолжается до тех пор, пока в сортирующем дереве не останется один элемент. Тогда Array[0], Array[1], … , Array[n-1] — упорядоченная последовательность.

Этот шаг требует O(n\log n) операций.

* Сложность: O(n log(n)).

***