open class grandfather{
      fun grandfatherr()
    {
        println("Inside of Grandfather function ")
    }
}
open class father:grandfather()
{
     fun fatherr()
    {
        println("Inside of father function")
    }


}
class son:father()
{

}
fun main()
{
    var i=son()
i.grandfatherr()
}