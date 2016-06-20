/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QDebug>

// SlicerQt includes
#include "qSlicerGuidedUltrasoundCalibrationModuleWidget.h"
#include "ui_qSlicerGuidedUltrasoundCalibrationModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate: public Ui_qSlicerGuidedUltrasoundCalibrationModuleWidget
{
public:
  qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate::qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerGuidedUltrasoundCalibrationModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModuleWidget::qSlicerGuidedUltrasoundCalibrationModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerGuidedUltrasoundCalibrationModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModuleWidget::~qSlicerGuidedUltrasoundCalibrationModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerGuidedUltrasoundCalibrationModuleWidget::setup()
{
  Q_D(qSlicerGuidedUltrasoundCalibrationModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
