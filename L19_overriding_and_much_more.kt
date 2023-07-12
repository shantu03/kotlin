
fun main()
{

    var k=ravi("dancer")
    var p=base("typer")
    k.display()
    p.display()
    k.showdata()
    println("7" + ravi("idot").toString())

    println("\nk.toString() overriding")
    println(k.toString())
    println("\nany('lier').toString() overriding")
    println(ravi("lier").toString())


}
open class base(val type:String)
{

     fun display()= println(type)
    open val name="Shantu"
    open fun showdata()= println("Inside the base class")
}
class ravi(type: String):base(type) //--> parameterized overriding
{
    override val name="ravi"
    override fun showdata() {
        println("${super.name} override to $name")
    }


//    ANY class overriding

    override fun toString(): String {
        println("inside of to.String function;\t${super.toString()} converted to ->")
        return "$name is $type"
    }
}
/*
Intellij shortcut
   -->     press alt + insert
    ANY CLASS FUNCTION OVERRIDING
    */
