# Tracking

Unreal Engine5.6 기반의 Q-Learning 알고리즘을 활용한 미로 찾기 AI프로젝트

## 프로젝트 개요
[![Video Label](https://img.youtube.com/vi/OwY0FVnFsKQ/hqdefault.jpg)](https://youtu.be/OwY0FVnFsKQ?si=TRAxYu9g-4hqoY_q)

"ARC Raiders"의 적 ai에서 영감을 받아, 이동학습하는 ai를 만들고 AStar를 이용해서 학습시간을 줄이는 시스템입니다.
이 프로젝트는 강화학습의 Q-Learning 알고리즘을 사용하여 미로에서 최적 경로를 학습하고 찾아가는 AI에이전트를 구현합니다.
Unreal Engine의 C++ 플러그인 시스템을 활용하여 확장 가능한 구조로 설계되있습니다.

## 주요 기능
- Q-Learning 알고리즘: 강화학습 기반 경로 탐색
- 동적 미로 생성: Eller's Maze를 활용한 랜덤 미로 생성
- 실시간 학습 시각화: 학습 과정을 이동 단위로 3D환경에서 시각적으로 확인
- A* 경로 찾기: 최적 경로와의 비교를 위한 A* 알고리즘

## 기술 스택
- Unreal Engine5.6
- Blueprint, Unreal C++
- Algorithms: Q-Learning, Eller's Maze, A*

## 개발진행
- [x] Eller's Maze
- [x] AStar
- [X] Q-Learning
- [ ] 동작확인 및 버그 수정
