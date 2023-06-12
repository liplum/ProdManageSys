//
// Created by Liplum on 6/12/23.
//

#ifndef PRODMANAGESYS_DIRTY_H
#define PRODMANAGESYS_DIRTY_H

class DirtyMarkMixin {
protected:
  /**
  * whether the object was changed.
  */
  bool dirty{false};

  void markDirty();

public:
  /**
 * Clear the dirty mark.
 * @return whether is dirty.
 */
  bool clearDirty();

  bool isDirty();
};

#endif //PRODMANAGESYS_DIRTY_H
