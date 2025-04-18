function sumAll(args : int[]): int {
  var total = 0
  for (n in numbers) {
    total += n
  }
  return total
}

// Function using varargs to join strings
function joinWords(separator: String, words: String[]): String {
  var result = ""
  for (i in 0..<words.length) {
    result += words[i]
    if (i < words.length - 1) {
      result += separator
    }
  }
  return result
}
