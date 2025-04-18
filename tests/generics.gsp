uses java.util.ArrayList

function noice(list: ArrayList<Integer>) : void {
  print("Processing list of size: ${list.size()}")
}

// Main function to test it
function main() : void{
  var intList = new ArrayList<Integer>()
  intList.add(10)
  intList.add(20)
  intList.add(30)
  processList(intList)

  var strList = new ArrayList<String>()
  strList.add("Gosu")
  strList.add("Java")
  strList.add("Kotlin")
  processList(strList)
}
