import Foundation

public func selectionSort(_ vetor: [Int]) -> [Int] {
    guard vetor.count > 1 else { return vetor }
    
    var a = vetor
    for i in 0..<a.count-1{
        var menor = i
        for j in i+1..<a.count{
           if a[j] < a[menor]{
                menor = j
            }
        }
        if i != menor {
            swap(&a[i], &a[menor])
        }
    }
    return a
}

