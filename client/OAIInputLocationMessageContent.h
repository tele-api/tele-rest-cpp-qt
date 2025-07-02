/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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
 * OAIInputLocationMessageContent.h
 *
 * Represents the [content](https://core.telegram.org/bots/api/#inputmessagecontent) of a location message to be sent as the result of an inline query.
 */

#ifndef OAIInputLocationMessageContent_H
#define OAIInputLocationMessageContent_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIInputLocationMessageContent : public OAIObject {
public:
    OAIInputLocationMessageContent();
    OAIInputLocationMessageContent(QString json);
    ~OAIInputLocationMessageContent() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    double getHorizontalAccuracy() const;
    void setHorizontalAccuracy(const double &horizontal_accuracy);
    bool is_horizontal_accuracy_Set() const;
    bool is_horizontal_accuracy_Valid() const;

    qint32 getLivePeriod() const;
    void setLivePeriod(const qint32 &live_period);
    bool is_live_period_Set() const;
    bool is_live_period_Valid() const;

    qint32 getHeading() const;
    void setHeading(const qint32 &heading);
    bool is_heading_Set() const;
    bool is_heading_Valid() const;

    qint32 getProximityAlertRadius() const;
    void setProximityAlertRadius(const qint32 &proximity_alert_radius);
    bool is_proximity_alert_radius_Set() const;
    bool is_proximity_alert_radius_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    double m_latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double m_longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    double m_horizontal_accuracy;
    bool m_horizontal_accuracy_isSet;
    bool m_horizontal_accuracy_isValid;

    qint32 m_live_period;
    bool m_live_period_isSet;
    bool m_live_period_isValid;

    qint32 m_heading;
    bool m_heading_isSet;
    bool m_heading_isValid;

    qint32 m_proximity_alert_radius;
    bool m_proximity_alert_radius_isSet;
    bool m_proximity_alert_radius_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInputLocationMessageContent)

#endif // OAIInputLocationMessageContent_H
