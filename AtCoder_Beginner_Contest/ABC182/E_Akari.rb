H, W, N, M = gets.split.map(&:to_i)
field = Array.new(H+2) {Array.new(W+2)}
light = Array.new(H+2) {Array.new(W+2) {-1}}
que = Array.new
result = 0
(W+2).times {|n| field[0][n] = "#"}
1.upto(H+1) do |n|
  field[n][0],field[n][W+1] = "#","#"
end
N.times do |n|
  gets.split.map(&:to_i).each_cons(2) do |a, b|
    field[a][b] = "."
    que << [a, b]
  end
end
M.times do
  gets.split.map(&:to_i).each_cons(2) do |a, b|
    field[a][b] = "#"
  end
end
(W+2).times {|n| field[-1][n] = "#"}

until que.empty?
  v = que.pop
  result += 1 if light[v[0]][v[1]] == -1
  light[v[0]][v[1]] = 1
  (v[1]+1).upto(W+1) do |n|
    break if field[v[0]][n] == "#"
    next if light[v[0]][n] == 1
    light[v[0]][n] = 1
    result += 1
  end
  (v[1]-1).downto(0) do |n|
    break if field[v[0]][n] == "#"
    next if light[v[0]][n] == 1
    light[v[0]][n] = 1
    result += 1
  end
  (v[0]+1).upto(H+1) do |n|
    break if field[n][v[1]] == "#"
    next if light[n][v[1]] == 1
    light[n][v[1]] = 1
    result += 1
  end
  (v[0]-1).downto(0) do |n|
    break if field[n][v[1]] == "#"
    next if light[n][v[1]] == 1
    light[n][v[1]] = 1
    result += 1
  end
end

p result