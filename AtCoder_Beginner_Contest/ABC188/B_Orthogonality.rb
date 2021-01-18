N = gets.chomp.to_i
A = gets.chomp.split.map(&:to_i)
B = gets.chomp.split.map(&:to_i)

result_box = (0...N).to_a.map {|n| A[n] * B[n]}
result_sum = result_box.inject(0) {|result, n| result += n}

(result_sum == 0) ? (puts 'Yes') : (puts 'No')