<?php
/**
 * Implemnts hook_preprocess_region().
 */
function normal_preprocess_region(&$vars) {
   if ($vars['region'] == 'header') {
     print "header";
   }
   
   
  
}

function normal_block_view_alter(&$data, $block) {
  // Remove the contextual links on all blocks that provide them.
  dpm($block);

}
