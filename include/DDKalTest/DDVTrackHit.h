#ifndef DDVTrackHIT_H
#define DDVTrackHIT_H

/** DDVMeasLayer:  Virtual hit class used by DD[X]Hit Classes, which should provide coordinate vector as defined by the MeasLayer
 *
 * @author S.Aplin DESY
 */


#include "kaltest/TVTrackHit.h"

#include "DDVMeasLayer.h"

#include "EVENT/TrackerHit.h"

class DDVTrackHit : public TVTrackHit {
  
public:
  
   /** Constructor Taking coordinates and associated measurement layer, with bfield and number of measurement dimentions*/
  DDVTrackHit(const TVMeasLayer &ms, Double_t *x, Double_t *dx, 
               Double_t bfield , Int_t dim, EVENT::TrackerHit* trkhit) 
  : TVTrackHit(ms, x, dx, bfield, dim), _trkhit(trkhit)
  { /* no op */ }
  
  EVENT::TrackerHit* getLCIOTrackerHit() const { return _trkhit; }
  
  
private:
  
  EVENT::TrackerHit* _trkhit;
  
};
#endif
