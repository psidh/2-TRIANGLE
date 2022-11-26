fun main(args: Array<String>) {
    print("Enter the first angle: ")
    val number1: Int =Integer.valueOf(readLine())
    print("Enter the second angle: ")
    val number2: Int =Integer.valueOf(readLine())

    var result: Double

    result = (number1 + number2).toDouble()
    var third = 180 - result
    println("The Third angle:  $third")

}