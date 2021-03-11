H, W, K = gets.split.map(&:to_i)
white = 0
black = 0
grid = Array.new(H){gets.chomp.chars {|n| n == '.' ? white+=1 : black+=1}}
white_max = white
white_min = black
result = 0

H.times do |n1|
  white = white_max
  black = black_max
  grid[n1].each do |judge|
    judge == '.' ? white-=1 : black-=1
  end
  W.times do |n2|
    H.times do |n3|
      next if n3 == n1
      grid[n3][n2] == '.' ? white-=1 : black-=1
    end
    result += 1 if black == K
  end
end

puts result