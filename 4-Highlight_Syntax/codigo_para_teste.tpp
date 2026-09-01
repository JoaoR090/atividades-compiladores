troca(inteiro: arr[], inteiro: pos_1, inteiro: pos_2)
    inteiro temp
    temp := arr[pos_1]
    arr[pos_1] := arr[pos_2];
    arr[pos_2] := temp;
fim

selectionSort(inteiro: arr[], inteiro: n)
    inteiro: menor_pos
    inteiro: i
    inteiro: j

    i := 0
    
    repita
        menor_pos := i
        j := i + 1

        repita
            se arr[j] < arr[menor_pos] então
                menor_pos := j
            fim

            j := j + 1

        até j = n - 1

        troca(arr, i, menor_pos)

        i := i + 1

    até i = n - 1
fim

principal()
    inteiro : arr[10]
    selectionSort(arr, 10)
fim