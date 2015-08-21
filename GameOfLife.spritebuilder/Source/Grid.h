//
//  Grid.h
//  GameOfLife
//
//  Created by Nas@Mac on 21/8/58.
//  Copyright (c) พ.ศ. 2558 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)evolveStep;
- (void)countNeighbors;
- (void)updateCreatures;

@end
