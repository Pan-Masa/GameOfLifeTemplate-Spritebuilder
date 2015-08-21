//
//  Creature.h
//  GameOfLife
//
//  Created by Nas@Mac on 21/8/58.
//  Copyright (c) พ.ศ. 2558 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
