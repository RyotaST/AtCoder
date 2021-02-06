N = gets.chomp.to_i
result = 0
result = ((((8**N*N).rationalize/7r) + ((1-8**N).rationalize/49r)).to_i)*2
result += 8**N
result = 10**N - result
p result % ((10**9)+7)