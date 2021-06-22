N,K = gets.split.map(&:to_i)
S = gets.chomp.chars
judge = S[0..(K-1)]
(N-K).times do |n1|
  judge.each_with_index do |value, i|
    if i == (judge.size)-1
      if value > S[judge.size+n1]
        judge.push(S[judge.size+n1])
        judge.delete_at(i)
        break
      end
    else
      if value > judge[i+1]
        judge.push(S[judge.size+n1])
        judge.delete_at(i)
        break
      end
    end
  end
end

puts judge.join