N, S, D = gets.split.map(&:to_i)
magic = Array.new(N) {gets.split.map(&:to_i)}

magic.each do |n|
  if n[0] < S && n[1] > D
    puts "Yes"
    exit
  else
    next
  end
end

puts "No"