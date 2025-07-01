/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIProximityAlertTriggered.h
 *
 * This object represents the content of a service message, sent whenever a user in the chat triggers a proximity alert set by another user.
 */

#ifndef OAIProximityAlertTriggered_H
#define OAIProximityAlertTriggered_H

#include <QJsonObject>

#include "OAIUser.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;

class OAIProximityAlertTriggered : public OAIObject {
public:
    OAIProximityAlertTriggered();
    OAIProximityAlertTriggered(QString json);
    ~OAIProximityAlertTriggered() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUser getTraveler() const;
    void setTraveler(const OAIUser &traveler);
    bool is_traveler_Set() const;
    bool is_traveler_Valid() const;

    OAIUser getWatcher() const;
    void setWatcher(const OAIUser &watcher);
    bool is_watcher_Set() const;
    bool is_watcher_Valid() const;

    qint32 getDistance() const;
    void setDistance(const qint32 &distance);
    bool is_distance_Set() const;
    bool is_distance_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUser m_traveler;
    bool m_traveler_isSet;
    bool m_traveler_isValid;

    OAIUser m_watcher;
    bool m_watcher_isSet;
    bool m_watcher_isValid;

    qint32 m_distance;
    bool m_distance_isSet;
    bool m_distance_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIProximityAlertTriggered)

#endif // OAIProximityAlertTriggered_H
