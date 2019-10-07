package com.erikriosetiawan

import java.util.*

fun main() {
    val empty = emptyArray<String>()

    var strings = Array<String>(size = 5, init = { index -> "Item #$index"})
    print(Arrays.toString(strings))
    print(strings.size)

    strings.set(2, "ChangedItem")
    print(strings.get(2))

    strings[2] = "ChangedItem"
    print(strings[2])
}