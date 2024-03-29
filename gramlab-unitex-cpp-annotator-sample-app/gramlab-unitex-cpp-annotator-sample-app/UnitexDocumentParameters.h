/*
 * UnitexDocumentParameters.h
 *
 *  Created on: 3 août 2012
 *      Author: sylvain
 */

#ifndef UNITEXDOCUMENTPARAMETERS_H_
#define UNITEXDOCUMENTPARAMETERS_H_

#include "AnnotationWrapper.h"

namespace unitexcpp
{
	namespace annotation
	{

		class UnitexDocumentParameters:
				public unitexcpp::annotation::AnnotationWrapper
		{
		public:
			static uima::TyErrorId initializeTypeSystem(uima::TypeSystem const& crTypeSystem);
			static UnitexDocumentParameters getUnitexDocumentParameters(uima::CAS& view);
			static UnitexDocumentParameters createUnitexDocumentParameters(uima::CAS& view);

		protected:
			UnitexDocumentParameters();
		public:
			UnitexDocumentParameters(uima::AnnotationFS annotationFS);
			virtual ~UnitexDocumentParameters();

		public:
			uima::UnicodeStringRef getAnalysisStrategy() const;
			void setAnalysisStrategy(icu::UnicodeString const& strategy);
			bool getSkip() const;
			void setSkip(bool skip);
			uima::UnicodeStringRef getUri() const;
			void setUri(icu::UnicodeString const& uri);

		private:
			static uima::Type tUnitexDocumentParameters;
			static uima::Feature fAnalysisStrategy;
			static uima::Feature fSkip;
			static uima::Feature fUri;
		};

	} /* namespace annotation */
} /* namespace unitexcpp */
#endif /* UNITEXDOCUMENTPARAMETERS_H_ */
