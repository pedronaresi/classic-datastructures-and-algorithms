import Foundation

public func bubbleSort(_ vetor: [Int]) -> [Int] {
    guard vetor.count > 1 else { return vetor }
    
    var a = vetor
    for i in 0..<a.count-1{
        for j in 0..<a.count-i-1{
            if a[j] > a[j+1] {
                swap(&a[j+1], &a[j])
            }
        }
    }
    return a
}
