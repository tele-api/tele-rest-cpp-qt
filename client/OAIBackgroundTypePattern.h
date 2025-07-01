/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIBackgroundTypePattern.h
 *
 * The background is a .PNG or .TGV (gzipped subset of SVG with MIME type “application/x-tgwallpattern”) pattern to be combined with the background fill chosen by the user.
 */

#ifndef OAIBackgroundTypePattern_H
#define OAIBackgroundTypePattern_H

#include <QJsonObject>

#include "OAIBackgroundFill.h"
#include "OAIDocument.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIDocument;
class OAIBackgroundFill;

class OAIBackgroundTypePattern : public OAIObject {
public:
    OAIBackgroundTypePattern();
    OAIBackgroundTypePattern(QString json);
    ~OAIBackgroundTypePattern() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAIDocument getDocument() const;
    void setDocument(const OAIDocument &document);
    bool is_document_Set() const;
    bool is_document_Valid() const;

    OAIBackgroundFill getFill() const;
    void setFill(const OAIBackgroundFill &fill);
    bool is_fill_Set() const;
    bool is_fill_Valid() const;

    qint32 getIntensity() const;
    void setIntensity(const qint32 &intensity);
    bool is_intensity_Set() const;
    bool is_intensity_Valid() const;

    bool isIsInverted() const;
    void setIsInverted(const bool &is_inverted);
    bool is_is_inverted_Set() const;
    bool is_is_inverted_Valid() const;

    bool isIsMoving() const;
    void setIsMoving(const bool &is_moving);
    bool is_is_moving_Set() const;
    bool is_is_moving_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAIDocument m_document;
    bool m_document_isSet;
    bool m_document_isValid;

    OAIBackgroundFill m_fill;
    bool m_fill_isSet;
    bool m_fill_isValid;

    qint32 m_intensity;
    bool m_intensity_isSet;
    bool m_intensity_isValid;

    bool m_is_inverted;
    bool m_is_inverted_isSet;
    bool m_is_inverted_isValid;

    bool m_is_moving;
    bool m_is_moving_isSet;
    bool m_is_moving_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIBackgroundTypePattern)

#endif // OAIBackgroundTypePattern_H
