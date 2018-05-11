import Foundation

public func insertionSort(_ vetor: [Int]) -> [Int] {
    guard vetor.count > 1 else { return vetor }
    
    var a = vetor
    for i in 1..<a.count{
        let aux = a[i]
        var j = i - 1
        while j >= 0 && a[j] > aux {
            a[j+1] = a[j]
            j -= 1
        }
        a[j+1] = aux;
    }
    return a
}
