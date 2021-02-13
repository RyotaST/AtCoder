require 'thread'

H, W = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
D = gets.split.map(&:to_i)
field = []
H.times do
  field.push(gets.chomp.chars)
end
count = 0

graph1 = Array.new(H) {Array.new(W) {Array.new}}
graph2 = Array.new(H) {Array.new(W) {Array.new}}
0.upto(H-1) do |n1|
  0.upto(W-1) do |n2|
    next if field[n1][n2] == '#'
    if n1+2 <= H-1 && n2+2 <=W-1
      if field[n1+2][n2+2] != '#'
        graph2[n1][n2].push([n1+2,n2+2])
      end
    end
    if n1+2 <= H-1 && n2+1 <=W-1
      if field[n1+2][n2+1] != '#'
        graph2[n1][n2].push([n1+2,n2+1])
      end
    end
    if n1+2 <= H-1
      if field[n1+2][n2] != '#'
        graph2[n1][n2].push([n1+2,n2])
      end
    end
    if n1+2 <= H-1 && n2-1 >= 0
      if field[n1+2][n2-1] != '#'
        graph2[n1][n2].push([n1+2,n2-1])
      end
    end
    if n1+2 <= H-1 && n2-2 >= 0
      if field[n1+2][n2-2] != '#'
        graph2[n1][n2].push([n1+2,n2-2])
      end
    end
    if n1+1 <= H-1 && n2+2 <=W-1
      if field[n1+1][n2+2] != '#'
        graph2[n1][n2].push([n1+1,n2+2])
      end
    end
    if n1+1 <= H-1 && n2+1 <=W-1
      if field[n1+1][n2+1] != '#'
        graph2[n1][n2].push([n1+1,n2+1])
      end
    end
    if n1+1 <= H-1
      if field[n1+1][n2] != '#'
        graph1[n1][n2].push([n1+1,n2])
      end
    end
    if n1+1 <= H-1 && n2-1 >= 0
      if field[n1+1][n2-1] != '#'
        graph2[n1][n2].push([n1+1,n2-1])
      end
    end
    if n1+1 <= H-1 && n2-2 >= 0
      if field[n1+1][n2-2] != '#'
        graph2[n1][n2].push([n1+1,n2-2])
      end
    end
    if n2+2 <= W-1
      if field[n1][n2+2] != '#'
        graph2[n1][n2].push([n1,n2+2])
      end
    end
    if n2+1 <= W-1
      if field[n1][n2+1] != '#'
        graph1[n1][n2].push([n1,n2+1])
      end
    end
    if n2-1 >= 0
      if field[n1][n2-1] != '#'
        graph1[n1][n2].push([n1,n2-1])
      end
    end
    if n2-2 >= 0
      if field[n1][n2-2] != '#'
        graph2[n1][n2].push([n1,n2-2])
      end
    end
    if n1-1 >= 0 && n2+2 <= W-1
      if field[n1-1][n2+2] != '#'
        graph2[n1][n2].push([n1-1,n2+2])
      end
    end
    if n1-1 >= 0 && n2+1 <= W-1
      if field[n1-1][n2+1] != '#'
        graph2[n1][n2].push([n1-1,n2+1])
      end
    end
    if n1-1 >= 0
      if field[n1-1][n2] != '#'
        graph1[n1][n2].push([n1-1,n2])
      end
    end
    if n1-1 >= 0 && n2-1 >= 0
      if field[n1-1][n2-1] != '#'
        graph2[n1][n2].push([n1-1,n2-1])
      end
    end
    if n1-1 >= 0 && n2-2 >= 0
      if field[n1-1][n2-2] != '#'
        graph2[n1][n2].push([n1-1,n2-2])
      end
    end
    if n1-2 >= 0 && n2+2 <= W-1
      if field[n1-2][n2+2] != '#'
        graph2[n1][n2].push([n1-2,n2+2])
      end
    end
    if n1-2 >= 0 && n2+1 <= W-1
      if field[n1-2][n2+1] != '#'
        graph2[n1][n2].push([n1-2,n2+1])
      end
    end
    if n1-2 >= 0
      if field[n1-2][n2] != '#'
        graph2[n1][n2].push([n1-2,n2])
      end
    end
    if n1-2 >= 0 && n2-1 >= 0
      if field[n1-2][n2-1] != '#'
        graph2[n1][n2].push([n1-2,n2-1])
      end
    end
    if n1-2 >= 0 && n2-2 >= 0
      if field[n1-2][n2-2] != '#'
        graph2[n1][n2].push([n1-2,n2-2])
      end
    end
  end
end

dist = Array.new(H){Array.new(W){-1}}
que1 = Queue.new
que2 = Queue.new

dist[C[0]-1][C[1]-1] = 0
que1.push([C[0]-1,C[1]-1])
que2.push([C[0]-1,C[1]-1])

until que1.empty?
  if !(que1.empty?)
    v = que1.pop
    if !(graph1[v[0]][v[1]].empty?)
      graph1[v[0]][v[1]].each do |nv|
        next if dist[nv[0]][nv[1]] != -1
        dist[nv[0]][nv[1]] = dist[v[0]][v[1]]
        que1.push(nv)
        que2.push(nv)
      end
    else
      que2.push(v)
    end
  else
    x = que2.pop
    graph2[x[0]][x[1]].each do |xv|
      next if dist[xv[0]][xv[1]] != -1
      dist[xv[0]][xv[1]] = dist[x[0]][x[1]]+1
      que1.push(xv)
    end
  end
end

p dist[D[0]-1][D[1]-1]